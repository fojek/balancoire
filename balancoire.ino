int moteur1[] = {2, 5};
int moteur2[] = {3, 4};

const int REPOS = 200;
const int ACCEL = 500;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(moteur1[0], OUTPUT);
  pinMode(moteur1[1], OUTPUT);
  pinMode(moteur2[0], OUTPUT);
  pinMode(moteur2[1], OUTPUT);
}

void allOff(int m1, int m2, int m3, int m4){
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);  
  delay(REPOS);  
}

void monTour(int m1, int m2){
  digitalWrite(m1, HIGH);
  digitalWrite(m2, HIGH);
  
  delay(ACCEL);  
}

void toggle(int m){
  digitalWrite(m, HIGH);
  delay(ACCEL);
  digitalWrite(m, LOW) ;
}
void loop() {
  // put your main code here, to run repeatedly:
  monTour(moteur1[0], moteur1[1]);
  allOff(moteur1[0], moteur1[1], moteur2[0], moteur2[1]); 
  monTour(moteur2[0], moteur2[1]);
  allOff(moteur1[0], moteur1[1], moteur2[0], moteur2[1]); /*
  digitalWrite(moteur1[0], HIGH);
  digitalWrite(moteur1[1], HIGH);
  digitalWrite(moteur2[0], HIGH);
  digitalWrite(moteur2[1], HIGH);
*//*
  toggle(moteur1[0]);
  toggle(moteur1[1]);
  toggle(moteur2[0]);
  toggle(moteur2[1]);
  */
}

 
