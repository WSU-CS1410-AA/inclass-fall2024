#ifndef __2DGRAPHICS_H__
#define __2DGRAPHICS_H__

class Point {
  public:
    Point();
    Point(int x, int y);

    Point& moveTo(int x, int y);
    const Point& print() const;

    ~Point();

  private:
    int x, y;
};

class Line {
  public:
    Line(const Point& p);
    Line(const Point& p, const Point& q);
    void draw() const;

  private:
    Point a, b;
};

class Rectangle {
  public:
    Rectangle(int w, int h);
    Rectangle(int x, int y, int w, int h);
    Rectangle(const Point& p, int w, int h);
    void draw() const;
    bool is_square() const;
  private:
    int w, h;
    Point p;

    static int count;
};
int Rectangle::count = 0;


Rectangle::Rectangle(int w, int h): w(w), h(h){count++;}
class Square : public Rectangle{
  Square(int w): Rectangle(w, w){}
  Square(int x, int y, int w): Rectangle(x, y, w, w){}
  Square(const Point& p, int w): Rectangle(p, w, w){}
};

#endif