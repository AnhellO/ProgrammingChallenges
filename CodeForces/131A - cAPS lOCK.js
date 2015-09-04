importPackage(java.io);
importPackage(java.lang);

function main() {
	var s = readline();
	if(s.length <= 1) {
		if(s === s.toLowerCase()) {
			s = s.toUpperCase();
		} else {
			s = s.toLowerCase();
		}
		print(s);
	} else {
		var i;
		for(i = 1 ; i < s.length ; i++) {
			if(s.charAt(i) !== s.charAt(i).toUpperCase()) {
				break;
			}
		}
		if(i === s.length) {
			var out = "";
			for(i = 0 ; i < s.length ; i++) {
				if(s.charAt(i) === s.charAt(i).toUpperCase()) {
					out += s.charAt(i).toLowerCase();
				} else {
					out += s.charAt(i).toUpperCase();
				}
			}
			print(out);
		} else {
			print(s);
		}
	}
}

main();