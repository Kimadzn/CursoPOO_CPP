#ifndef CIRCLE.H
#define CIRCLE.H


class Circle {
    private:
        float radius;
        int x, y;

    public:
        Circle();
        Circle(float, int = 0 , int = 0);
        ~Circle(){};
    // Funções Membro Inteface
        float area ();
        float diameter();
        void set_radius(float); // Setter
        void set_origin(int, int);
        float get_radius(); // Getter
        void imprime();

};

#endif 