{
  TGraphErrors *gr = new TGraphErrors("pendolo.dat");
  TF1 *f = new TF1("f","[1]*x+[0]");
  f->SetParameter(0,4);
  f->SetParameter(1,0);
  gr->Draw("AP");
  // Correlation matrix
  // Band
  // Contour
}
