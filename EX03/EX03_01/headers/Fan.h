class Fan
{
    public:
        Fan();
        int getSpeed();
        void setSpeed(int fanSpeed);
        bool getOn();
        void setOn(bool power);
        double getRadius();
        void setRadius(double fanRadius);
    private:
        int speed;
        bool on;
        double radius;
};