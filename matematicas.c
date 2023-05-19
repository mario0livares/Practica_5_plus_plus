double potencia(double x, double y) {
double resultado = 1.0;
for (int i = 0; i < y; i++) {
resultado *= x;
}
return resultado;
}
double sumatoria(int n, int m, double* datos_sumatoria) {
double suma = 0.0;
for (int i = n; i <= m; i++) {
suma += datos_sumatoria[i];
}
return suma;
}
double multiplicatoria(int n, int m, double* datos_multiplicatoria) {
double multiplicacion = 1.0;
for (int i = n; i <= m; i++) {
multiplicacion *= datos_multiplicatoria[i];
}
return multiplicacion;
}
