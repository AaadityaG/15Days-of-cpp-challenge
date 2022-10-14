void g(int, double, char = 'a'); // Defaults ch
void g(int i, double f = 0.0, char ch); // A new overload. Defaults f & ch
void g(int i = 0, double f, char ch); // A new overload. Defaults i, f & ch
// void g(int i = 0, double f = 0.0, char ch = ’a’); // Alternate signature. Defaults all in one go