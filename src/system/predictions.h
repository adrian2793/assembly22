#define N 50

class AI {
  public:
      float x[N];
      float y[N];
      float a;
      float b;
      float alpha;
      int train_model();
};

float x[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
float y[N] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100};
float a = 0;
float b = 0;
float alpha = 0.001;

int train_model() {
  while (true) {
    float error = 0;
    for (int i = 0; i < N; i++) {
      error += pow(y[i] - (a * x[i] + b), 2);
    }
    error /= N;
    Serial.print("Generating Output ... ");
    Serial.println(b);
    if (error < 0.1) {
      break;
      return true;
    } else {
      return false;
    }
    float da = 0;
    float db = 0;
    for (int i = 0; i < N; i++) {
      da += -2 * x[i] * (y[i] - (a * x[i] + b));
      db += -2 * (y[i] - (a * x[i] + b));
    }
    da /= N;
    db /= N;
    a = a - alpha * da;
    b = b - alpha * db;
  }
}

float predict(float x) {
  return a * x + b;
}
