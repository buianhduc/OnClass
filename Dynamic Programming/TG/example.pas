Program Triangle;
Uses Math;
Const
  maxN =100;
Var
  n :ShortInt;
  A :Array[1..maxN,1..maxN] of ShortInt;
  F :Array[0..maxN,0..maxN] of SmallInt;
 
  procedure Enter;
  var
    i,j :ShortInt;
  begin
    Read(n);
    for i:=1 to n do
      for j:=1 to i do Read(A[i,j]);
  end;
 
  procedure Optimize;
  var
    i,j :ShortInt;
  begin
    for i:=1 to n-1 do
      begin
        F[i,0]:=-1; F[i,i+1]:=-1;
      end;
    F[0,0]:=0; F[1,1]:=A[1,1];
    for i:=2 to n do
      for j:=1 to i do
        F[i,j]:=Max(F[i-1,j-1],F[i-1,j])+A[i,j];
  end;
 
  procedure Trace(i,j :ShortInt);
  begin
    if (F[i,j]=F[i-1,j-1]+A[i,j]) then Dec(j);
    Dec(i);
    if (i>0) then
      begin
        Trace(i,j);
        Write('(',i,', ',j,') -> ');
      end;
  end;
 
  procedure Escape;
  var
    i,iMax :ShortInt;
  begin
    iMax:=1;
    for i:=2 to n do
      if (F[n,iMax]<F[n,i]) then iMax:=i;
    WriteLn(F[n,iMax]);
    Trace(n,iMax);
    Write('(',n,', ',iMax,')');
  end;
 
Begin
  Assign(Input,''); Reset(Input);
  Assign(Output,''); Rewrite(Output);
  Enter;
  Optimize;
  Escape;
  Close(Input); Close(Output);
End.