    const int QUARTERS = 4;
    class Sales
    {
        private:
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        public:
            void showSales() const;
            Sales(){for(int i=0;i<QUARTERS;i++) sales[i]=0.0; average=0.0;max=0.0;min=0.0;}
            Sales(double * sales_s,double average_s,double max_s,double min_s);
    };