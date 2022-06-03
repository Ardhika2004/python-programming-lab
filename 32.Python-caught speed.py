def caught_speed(speed,is_birthday):
    if is_birthday:
        speed=speed-5
    if is_birthday and speed<60:
        return 0
    if speed >=61 and speed<81:
        return 1
    if speed >=81:
        return 2