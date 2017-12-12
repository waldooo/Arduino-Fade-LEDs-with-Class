class LEDs
{
  public:
    int pino_PWM;
    float intensidade;
    float frequencia;

    // construtor (precisa ter o mesmo nome da classe)
    LEDs(int _pino_PWM, float _frequencia) {

      pino_PWM = _pino_PWM;
      //pinMode(pino_PWM, OUTPUT);
      frequencia = _frequencia;

      intensidade = 0;

    }

    // métodos
    void atualizar() {

      float senoidal = sin(frequencia *2*PI* millis() / 1000);

/*
 * para que uma onda senoidal tenha seu valor máximo 255 e todos
 * seus valores positivos, precisamos multiplicar o seno do ângulo por 
 * 255/2 e somar o valor 255/2 ao valor resultante, assim o valor 
 * mínimo da onda resultante será 0 e o máximo 255.
 */
       intensidade = 127.5 + 127.5 * senoidal;
      analogWrite(pino_PWM, intensidade);
    }

    void modificafrequencia(){
      /*
       * cada vez que esta função for chamada, o valor da frequência
       * será aumentado em 1 unidade.
       */
      frequencia++;
    }

};


