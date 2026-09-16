// Inheritance, Function Overriding, Dynamic Array Allocation
// 'new' creates an object in the heap memory.
// Dynamic array allocation is done using new operator. For example, to create an array of 3 points on the heap, we can use: Point *points_of_triangle = new Point[3]; This creates an array of 3 points on the heap and points_of_triangle points to the first point of the array.

#include<iostream>
#include <string>
using namespace std;

//// Shape, triangle, rectangle (inheritance)
//// Diamond problem

// point class:
class Point {
public:
    int x;
    int y;
    void print_point();
};

// print_point() function for Point class:
void Point::print_point() {
    cout << "(" << x << " , " << y << ")" << endl;
}

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

// shape class:
class Shape {
public:
    int num_points;       // can "protect" these later  // This stores how many points a shape has. For example, a triangle has 3 points, a rectangle has 4 points, etc.
    Point *points;        // pointer to point

    Shape();              // constructor
    void set_points(Point *p);
    float get_area();
};



// constructor for shape class:
Shape::Shape() {
    cout << "In Shape constructor ... " << endl;
    points = NULL;  // initialize                // points doesn't point to anywhere yet. It will point to an array of points later.
    num_points = 0;                              // The shape currently has 0 points.
    // do nothing. Can't decide what "shape" is ... 
}

// Shape::get_area() function:
float Shape::get_area() {
    // again, can't do anything
    return -1.0;
}

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// let's inherit this class

// triangle class:
class Triangle: public Shape {       // triangle inherits from shape. This means that triangle has all the members of shape, plus its own members.
public:
    Triangle();                      // constructor
    void set_points(Point *p);       // Used to set the points of the triangle. This function should be moved to the shape class, since all shapes have points.
    void show_shape();
    float get_area();                // "overriding" the function
};

// constructor for triangle class:
Triangle::Triangle() {
    cout << "In Triangle constructor ... " << endl;
    num_points = 3;                                  // bcz a triangle has 3 points.
}

// set_points() function for triangle class:
void Triangle::set_points(Point *p) {          // should move this to shape!       // p is a pointer to the first point of the triangle's points array.
    points = p;                                // points point to the triangle's points array. Now the triangle has its points set.
}

// show_shape() function for triangle class:
void Triangle::show_shape() {                 // should move this to shape!
    Point *temp = points;                     // temp points to the first point of the triangle's points array.
    for(int i = 0; i < num_points; i++) {     
        temp->print_point();                  // print the current point. temp is a pointer to a Point, so we use the -> operator to access the print_point() function.
        temp++;
    }
}

// get_area() function for triangle class:
float Triangle::get_area() {
    int x0, y0, x1, y1, x2, y2;             // temporary points for easy use
    Point *t = points;

    x0 = t->x;   y0 = t->y;    t++;        // 1st point
    x1 = t->x;   y1 = t->y;    t++;        // 2nd point
    x2 = t->x;   y2 = t->y;                // 3rd point

    // formula for computing area ... don't have to understand!
    return abs(x0 * (y1 - y2) + x1 * (y2 - y0) + x2 * (y0 - y1) / 2);
}


// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// runner

// create_shape() function:
void create_shape() {
    

    Triangle *t = new Triangle;   // create a triangle on the heap. This is a pointer to a triangle. We use the 'new' operator to create it on the heap, so that it persists after this function ends.

    // create points for triangle using array
    Point p1, p2, p3;
    p1.x = p1.y = 0;         // p1 is at (0,0)
    p2.x = p2.y = 10;        // p2 is at (10,10)
    p3.x = p3.y = 25;        // p3 is at (25,25)



    Point *points_of_triangle;        // need this on the heap!       // creates an array of 3 points on the heap

    // Copying points into the array:

    points_of_triangle = new Point[3]; // don't do this without the 'new' operator. This is a pointer to an array of 3 points on the heap.  // Dynamic array allocation.
    points_of_triangle[0] = p1;
    points_of_triangle[1] = p2;
    points_of_triangle[2] = p3;



    t->set_points(points_of_triangle);   // t is a pointer to a triangle, so we use the -> operator to call the set_points() function. 
    t->show_shape();

    // now try to compute the area 
    cout << "Area of t: " << t->get_area() << endl;      // print the area of the triangle
}


int main() {
    create_shape();
    return 0;
    
}


/*
////Shape class:

Point *points;


It is a pointer to Point.

It will eventually point to an array of points.

For example:

points
  |
  ↓
+-------+-------+-------+
| Point | Point | Point |
+-------+-------+-------+
   0       1       2



//// Triangle class:

num_points
points
get_area()

Conceptually:
Shape
  ↑
  |
Triangle


OR:
Shape
 ├── num_points
 ├── points
 └── get_area()

        ↓ inherits

Triangle
 ├── num_points
 ├── points
 └── get_area()


//// Triangle set_points():

void Triangle::set_points(Point *p) {
    points = p;
}

p is a pointer to the first point.

points = p;

Now points points to the triangle's point array.

p
↓
+-------+-------+-------+
| Point | Point | Point |
+-------+-------+-------+

points
  ↑
  |
same location

//// show_shape():

void Triangle::show_shape() {
    Point *temp = points;

    for(int i = 0; i < num_points; i++) {
        temp->print_point();
        temp++;
    }
}

Point *temp = points;

temp points to the first point.

temp
 ↓
[Point 0] [Point 1] [Point 2]

temp->print_point()
temp->print_point();

temp is a pointer.

The -> operator means:

Access a member/function through a pointer.

It is basically equivalent to:

(*temp).print_point();

So:

temp->print_point();

prints the current point.


temp++;

This moves the pointer to the next Point.

For example:

Before:

temp
 ↓
[P0] [P1] [P2]


After temp++:

     temp
      ↓
[P0] [P1] [P2]

So the loop prints:

(0 , 0)
(10 , 10)
(25 , 25)



//// Creating an array on the heap:

Point *points_of_triangle;

This creates a pointer.

It doesn't yet create any Points.

Then:

points_of_triangle = new Point[3];

This creates an array of 3 Points on the heap.

Memory looks like:

points_of_triangle
       ↓
+---------+---------+---------+
| Point 0 | Point 1 | Point 2 |
+---------+---------+---------+

////Copying points into the array:
points_of_triangle[0] = p1;
points_of_triangle[1] = p2;
points_of_triangle[2] = p3;

Now:

points_of_triangle
       ↓
+-----------+-----------+-----------+
|  (0,0)    | (10,10)   | (25,25)   |
+-----------+-----------+-----------+
     0           1           2


//// Giving points to Triangle:

t->set_points(points_of_triangle);

t is a pointer to Triangle, so we use:

->

This calls:

Triangle::set_points()

Inside it:

points = p;

So now Triangle's points points to the array.

Triangle
   |
   | points
   ↓
+---------+---------+---------+
| (0,0)   |(10,10)  |(25,25)  |
+---------+---------+---------+


//// Calculate area:

cout << "Area of t: " << t->get_area() << endl;

Calls:

Triangle::get_area()

because t is a Triangle pointer.

*/


/*

//// Complete flow of the program:



main()
  |
  ↓
create_shape()
  |
  ↓
new Triangle
  |
  ├── Shape constructor
  |
  └── Triangle constructor
          |
          ↓
      num_points = 3
          |
          ↓
Create p1, p2, p3
          |
          ↓
Create Point[3] on heap
          |
          ↓
Copy p1, p2, p3 into array
          |
          ↓
t->set_points()
          |
          ↓
Triangle now has the points
          |
          ↓
t->show_shape()
          |
          ↓
Print 3 points
          |
          ↓
t->get_area()
          |
          ↓
Calculate area
*/