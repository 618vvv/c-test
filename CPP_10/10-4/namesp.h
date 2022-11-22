    const int QUARTERS = 4;
namespace SALES{
    class Sales
    {
        private:
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        public:
            void showSales() const;
            Sales(const double ar[],int n);
            Sales();
    };
};