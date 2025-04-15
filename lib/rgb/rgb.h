#ifndef RGB_H
#define RGB_H

class RGB {
    private: 
        int rPin;
        int gPin;
        int bPin;
        int rgbPins[3] = {rPin, gPin, bPin};
    public:
        RGB(int rPin, int gPin, int bPin);
        void init();
        void off();
        void red();
        void grn();
        void blu();
        void on(int pwrState, int rgbPwrState, int brtState, int brtMdState, int rVal, int gVal, int bVal);
        void onSw(int rState, int gState, int bState, int brt);
};

#endif