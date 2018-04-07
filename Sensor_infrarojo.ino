class Infrarrojo
{
  public:
  Infrarrojo(int pin, int blanco);
  bool leeBlanco();
  
  private:
  int _pin;
  int _blanco;
};

Infrarrojo::Infrarrojo(int pin, int blanco): _pin(pin), _blanco(blanco) {
  pinMode(_pin,INPUT);
}

bool Infrarrojo::leeBlanco()
{
  if(analogRead(_pin) >= blanco)
    return true;
  return false;  
}

class robot {
  private:
  
  
  
  
  public:
  
  
  
    
  
  };
