from operator import truediv


def cigars(cigars,is_weekend):
    if is_weekend and cigars>=40:
        return True
    if cigars>=40 and cigars<=60:
        return True
    return False