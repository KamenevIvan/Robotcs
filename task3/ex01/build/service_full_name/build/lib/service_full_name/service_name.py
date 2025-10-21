import rclpy
from rclpy.node import Node
from full_name_interfaces.srv import SummFullName  # Импорт вашего сервиса

class FullNameService(Node):
    def __init__(self):
        super().__init__('service_name')
        self.srv = self.create_service(SummFullName, 'SummFullName', self.summ_full_name_callback)

    def summ_full_name_callback(self, request, response):
        response.full_name = f"{request.surname} {request.name} {request.patronymic}"
        self.get_logger().info(f'Incoming request: surname: {request.surname}, name: {request.name}, patronymic: {request.patronymic}')
        return response

def main(args=None):
    rclpy.init(args=args)
    full_name_service = FullNameService()
    rclpy.spin(full_name_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()