namespace data{
  TGraphErrors *gr;
}

double fun(const double *x,const double *par){
  return par[1]*(*x)+par[0];
}

void fcn(int &npar,double *gin,double &f,double *par,int iflag){
  f = 0.0;
  for (int i=0;i<data::gr->GetN();i++){
    // Calcolo del Chi2
  }
}

void fitlin(){

  data::gr = new TGraphErrors("pendolo.dat");

  // Define the minimization problem
  // TMinuit minuit(...); // numero di parametri  
  // minuit.SetFCN(fcn);
  // minuit.DefineParameter(indice,"nome",valin,step,min,max);
  // per ogni indice inserisco nome, valore iniziale, step, minimo, massimo del parametro

  // Minimize
  // minuit.Command("MIGRAD"); // Comando di minimizzazione

  // Get result
  // per ogni indice estraggo il valore del parametro e del suo errore
  // minuit.GetParameter(indice,val,eval);

}
