rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testLongInt.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/resultLongInt.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Long Int - FAIL"
  else
    echo "Long Int - PASS"
  fi 
else
  echo "Long Int - FAIL (MISSING FILE)"
fi
