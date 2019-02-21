#import "ptr.dll"
void ptr(const double &p[]);
#import "rta.dll"
void sma_c(double &p_dest[], const double &p_src[], unsigned int n,
        unsigned int period);
#import

#property indicator_chart_window
#property indicator_buffers 1

#property indicator_label1 "SMA"
#property indicator_type1  DRAW_LINE
#property indicator_color1 clrRed
#property indicator_style1 STYLE_SOLID
#property indicator_width1 2

double sma[];

int OnInit()
{
    SetIndexBuffer(0, sma, INDICATOR_DATA);

    return INIT_SUCCEEDED;
}

int OnCalculate(
        const int TOTAL,
        const int PREV,
        const datetime &T[],
        const double &O[],
        const double &H[],
        const double &L[],
        const double &C[],
        const long &TICK_VOL[],
        const long &VOL[],
        const int &SP[])
{
    ArraySetAsSeries(C, false);

    ptr(C);

    sma_c(sma, C, TOTAL, 12);

    return TOTAL;
}
