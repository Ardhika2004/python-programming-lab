side1=eval(input("Enter the first sides of the triangle : "))
side2=eval(input("Enter the second sides of the triangle : "))
side3=eval(input("Enter the third sides of the triangle : "))
if side1!=side2!=side3 : 
    print("Given triangle is scalene triangle ")
if side1==side2==side3:
    print("Given triangle is isosceles triangle")
if side3== ((side1**2+side2**2 )**0.5):
    print("Given triangle is right triangle ")