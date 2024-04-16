rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testSmallInt.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultSmallInt.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Small Int - FAIL"
  else
    echo "Small Int - PASS"
  fi 
else
  echo "Small Int - FAIL (MISSING FILE)"
fi
