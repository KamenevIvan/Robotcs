import math

# Замените x, y, z, w на значения из последней записи в transform.txt
x, y, z, w = 0.000, 0.000, -0.143, 0.990
yaw = math.atan2(2 * (w * z + x * y), 1 - 2 * (z**2 + y**2))
yaw_degrees = math.degrees(yaw)

print(f"Yaw in degrees: {yaw_degrees}")