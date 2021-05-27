#include <iostream>
using namespace std;

class IntPoint
{
public:
    int x;
    int y;
    IntPoint(int x, int y) : x(x), y(y) {}
};

class Rectangle
{
private:
    IntPoint corner;
    int width;
    int height;

public:
    Rectangle(IntPoint pt, int w, int h) : corner((pt.x < -100) ? -100 : (pt.x > 100 ? 100 : pt.x),
                                                  (pt.y < -100) ? -100 : (pt.y > 100 ? 100 : pt.y)),
                                           width((w < 0) ? 0 : w),
                                           height((h < 0) ? 0 : h){};

    int get_perimeter() { return 2 * width + 2 * height; }

    int get_area() { return width * height; }

    int get_width() { return width; }

    int get_height() { return height; }

    bool intersect(Rectangle r)
    {
            // 도저히 모르겠습니다..
        {
            if (l1.x == r1.x || l1.y == r2.y || l2.x == r2.x || l2.y == r2.y)
            {
                return false;
            }

            if (l1.x >= r2.x || l2.x >= r1.x)
                return false;

            if (l1.y <= r2.y || l2.y <= r1.y)
                return false;

            return true;
        }
    }

    int diagonal()
    {
        int sqrt_of_width = this->width * this->width;
        int sqrt_of_height = this->height * this->height;

        int diaognal = sqrt(sqrt_of_height + sqrt_of_width);

        return diaognal;
    }

    IntPoint center()
    {
        int half_of_width = this->width / 2;
        int half_of_height = this->height / 2;

        IntPoint result = IntPoint(corner.x + half_of_width, corner.y + half_of_height);
        return result;
    }

    bool is_inside(IntPoint pt)
    {
        int x_start = corner.x;
        int x_end = corner.x + width;
        int y_start = corner.y;
        int y_end = corner.y - height;
        if (pt.x < x_start || pt.x > x_end)
        {
            cout << "NOT IN";
            return 0;
        }
        if (pt.y < y_start || pt.y > y_end)
        {
            cout << "NOT IN";
            return 0;
        }
        cout << "In";
        return 1;
    };

    class Center
    {
    private:
    public:
        int x;
        int y;
        Center(int xx, int yy) : x(xx), y(yy){};
    };

    class Circle
    {
    private:
        int r;
        Center circleCenter;

    public:
        Circle(int rr, Center c) : r(rr), circleCenter((c.x < -100) ? -100 : (c.x > 100 ? 100 : c.x), (c.y < -100) ? -100 : (c.y > 100 ? 100 : c.y)){};

        Center get_center()
        {
            return circleCenter;
        }
        int get_radius()
        {
            return r;
        }
        double get_perimeter()
        {
            return 2 * 3.14 * this->r;
        };

        double get_area()
        {
            return 3.14 * this->r * this->r;
        }
    };

    bool encloses(Rectangle rect, Circle circ)
    {
        int rectCornerX = rect.center().x - (rect.get_width() / 2);
        int rectCornerY = rect.center().y + (rect.get_height() / 2);
        int circCorner_start_x = rectCornerX + circ.get_radius();
        int circCorner_end_x = rectCornerX + circ.get_radius() * 2;
        int circCorner_start_y = rectCornerY - circ.get_radius();
        int circCorner_end_y = rectCornerY - circ.get_radius() * 2;

        if (circ.get_center().x < circCorner_start_x || circ.get_center().x > circCorner_end_x)
        {
            cout << "NOT IN";
            return 0;
        }
        if (circ.get_center().y < circCorner_start_y || circ.get_center().y > circCorner_end_y)
        {
            cout << "NOT IN";
            return 0;
        }
        cout << "In";
        return 1;
    }
};
int main()
{

    Rectangle
        rect1(IntPoint(2, 3), 5, 7),
        rect2(IntPoint(2, 3), 1, 3),
        rect3(IntPoint(2, 3), 15, 3),
        rect4(IntPoint(2, 3), 5, 3);

    std::cout << rect1.get_width() << '\n';
    std::cout << rect1.get_height() << '\n';
    std::cout << rect2.get_width() << '\n';
    std::cout << rect2.get_height() << '\n';
    std::cout << rect3.get_width() << '\n';
    std::cout << rect3.get_height() << '\n';
    std::cout << rect4.get_width() << '\n';
    std::cout << rect4.get_height() << '\n';
    std::cout << rect1.get_perimeter() << '\n';
    std::cout << rect1.get_area() << '\n';
    std::cout << rect2.get_perimeter() << '\n';
    std::cout << rect2.get_area() << '\n';
    std::cout << rect3.get_perimeter() << '\n';
    std::cout << rect3.get_area() << '\n';
    std::cout << rect4.get_perimeter() << '\n';
    std::cout << rect4.get_area() << '\n';

    std::cout << rect4.get_perimeter() << '\n';
    rect4.is_inside(IntPoint(1, 5));
}