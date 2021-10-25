#include <Arduino.h>

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill-in your Template ID (only if using Blynk.Cloud) */
#define BLYNK_TEMPLATE_ID "TMPLK8DWE3sN"
#define BLYNK_DEVICE_NAME "SimpleAutomatization"
#define BLYNK_AUTH_TOKEN "n2NIiN0pwjQP0MZCHL_81_94MBPkEA6h"
//#define BLYNK_TEMPLATE_ID   "YourTemplateID"

#include <BlynkSimpleStream.h>

void setup()
{
  Serial.begin(9600);
  Blynk.begin(Serial, BLYNK_AUTH_TOKEN);
}

void loop()
{
  Blynk.run();
}