import sys
import rclpy
from rclpy.node import Node
from full_name_interfaces.srv import SummFullName  # Импорт вашего сервиса

class FullNameClient(Node):
    def __init__(self):
        super().__init__('client_name')
        self.cli = self.create_client(SummFullName, 'SummFullName')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        self.req = SummFullName.Request()

    def send_request(self, surname, name, patronymic):
        self.req.surname = surname
        self.req.name = name
        self.req.patronymic = patronymic
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    if len(sys.argv) != 4:
        print('Usage: ros2 run service_full_name client_name <surname> <name> <patronymic>')
        return

    rclpy.init(args=args)
    full_name_client = FullNameClient()
    response = full_name_client.send_request(sys.argv[1], sys.argv[2], sys.argv[3])
    full_name_client.get_logger().info(f'Result: {response.full_name}')
    full_name_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()