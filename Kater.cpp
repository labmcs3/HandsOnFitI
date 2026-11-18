#include <TAxis.h>
#include <TApplication.h>
#include <TF1.h>
#include <TGraphErrors.h>
#include <TMinuit.h>

namespace ext{
  TGraphErrors *gr[2];
  TF1 *f[2];
}

int main() {
  
  TApplication app("app", 0, 0);
  std::string files[2] = {"perno1.dat", "perno2.dat"};
  std::string names[2] = {"f1", "f2"};

  for (int k = 0; k < 2; k++) {
    ext::gr[k] = new TGraphErrors(files[k].c_str());
    ext::f[k]  = new TF1(names[k].c_str(), "[2]*(x-[0])^2+[3]*(x-[0])+[1]");
    if (k==0)
      ext::gr[k]->Draw("AP");
    else 
      ext::gr[k]->Draw("P");
  }
  for (int k = 0; k < 2; k++)
    ext::gr[k]->Fit(names[k].c_str());
  app.Run(true);
  
  return 0;
}
