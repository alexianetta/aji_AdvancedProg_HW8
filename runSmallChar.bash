rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testSmallChar.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultSmallChar.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Small Char - FAIL"
  else
    echo "Small Char - PASS"
  fi 
else
  echo "Small Char - FAIL (MISSING FILE)"
fi
