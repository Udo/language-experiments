mkdir -p bin
mkdir -p log

for F in *.c
do
	echo "Building $F"
	g++ -o "bin/$F.bin" "$F" > "log/$F.build.log" 2>&1
	echo "Errors: $(wc -l log/$F.build.log)"
done

ls -lh bin/
