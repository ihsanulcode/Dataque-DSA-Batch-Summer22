class Box
{
private:
    double height;
    double width;
    double depth;

public:
    Box();                       // no-argument constructor
    Box(double, double, double); // argument constructor

    // functions
    double volume();
    // getter-setters
    void setHeight(double);
    void setWidth(double);
    void setDepth(double);
    double getHeight();
    double getWidth();
    double getDepth();
};
