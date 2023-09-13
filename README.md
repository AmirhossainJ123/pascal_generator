# pascal_generator
using this you can generate pascal triangle, pyramid, and for the forth dimension I will do it soon, the problem is visualizing the 4D but the formula is just simple: w!/(x!*(y-x)!*(z-y)!*(w-z)!)
# example of 3D generation:
<img src="example.jpg">
<h1>usage of pascal n-simplex gen:</h1>
<img src="exmpl.png">
well I dont find it a lot useful in daily life but like its definitely helpful like as example you can see in the image above, the layer 6 of a pascal 6D is a bunch of numbers, but not any random numbers summed up in a weird way(technically they are but like they have other uses too!) those numbers have a use in algebra for example (a+b+c+d+e+f)^6 is equal to


a<sup>6</sup>+6a<sup>5</sup>b+6a<sup>5</sup>c+6a<sup>5</sup>d+6a<sup>5</sup>f+6a<sup>5</sup>m+15a<sup>4</sup>b<sup>2</sup>+30a<sup>4</sup>bc+30a<sup>4</sup>bd+30a<sup>4</sup>bf+30a<sup>4</sup>bm+15a<sup>4</sup>c<sup>2</sup>+30a<sup>4</sup>cd+30a<sup>4</sup>cf+30a<sup>4</sup>cm+15a<sup>4</sup>d<sup>2</sup>+30a<sup>4</sup>df+30a<sup>4</sup>dm+15a<sup>4</sup>f<sup>2</sup>+30a<sup>4</sup>fm+15a<sup>4</sup>m<sup>2</sup>+20a<sup>3</sup>b<sup>3</sup>+60a<sup>3</sup>b<sup>2</sup>c+60a<sup>3</sup>b<sup>2</sup>d+60a<sup>3</sup>b<sup>2</sup>f+60a<sup>3</sup>b<sup>2</sup>m+60a<sup>3</sup>bc<sup>2</sup>+120a<sup>3</sup>bcd+120a<sup>3</sup>bcf+120a<sup>3</sup>bcm+60a<sup>3</sup>bd<sup>2</sup>+120a<sup>3</sup>bdf+120a<sup>3</sup>bdm+60a<sup>3</sup>bf<sup>2</sup>+120a<sup>3</sup>bfm+60a<sup>3</sup>bm<sup>2</sup>+20a<sup>3</sup>c<sup>3</sup>+60a<sup>3</sup>c<sup>2</sup>d+60a<sup>3</sup>c<sup>2</sup>f+60a<sup>3</sup>c<sup>2</sup>m+60a<sup>3</sup>cd<sup>2</sup>+120a<sup>3</sup>cdf+120a<sup>3</sup>cdm+60a<sup>3</sup>cf<sup>2</sup>+120a<sup>3</sup>cfm+60a<sup>3</sup>cm<sup>2</sup>+20a<sup>3</sup>d<sup>3</sup>+60a<sup>3</sup>d<sup>2</sup>f+60a<sup>3</sup>d<sup>2</sup>m+60a<sup>3</sup>df<sup>2</sup>+120a<sup>3</sup>dfm+60a<sup>3</sup>dm<sup>2</sup>+20a<sup>3</sup>f<sup>3</sup>+60a<sup>3</sup>f<sup>2</sup>m+60a<sup>3</sup>fm<sup>2</sup>+20a<sup>3</sup>m<sup>3</sup>+15a<sup>2</sup>b<sup>4</sup>+60a<sup>2</sup>b<sup>3</sup>c+60a<sup>2</sup>b<sup>3</sup>d+60a<sup>2</sup>b<sup>3</sup>f+60a<sup>2</sup>b<sup>3</sup>m+90a<sup>2</sup>b<sup>2</sup>c<sup>2</sup>+180a<sup>2</sup>b<sup>2</sup>cd+180a<sup>2</sup>b<sup>2</sup>cf+180a<sup>2</sup>b<sup>2</sup>cm+90a<sup>2</sup>b<sup>2</sup>d<sup>2</sup>+180a<sup>2</sup>b<sup>2</sup>df+180a<sup>2</sup>b<sup>2</sup>dm+90a<sup>2</sup>b<sup>2</sup>f<sup>2</sup>+180a<sup>2</sup>b<sup>2</sup>fm+90a<sup>2</sup>b<sup>2</sup>m<sup>2</sup>+60a<sup>2</sup>bc<sup>3</sup>+180a<sup>2</sup>bc<sup>2</sup>d+180a<sup>2</sup>bc<sup>2</sup>f+180a<sup>2</sup>bc<sup>2</sup>m+180a<sup>2</sup>bcd<sup>2</sup>+360a<sup>2</sup>bcdf+360a<sup>2</sup>bcdm+180a<sup>2</sup>bcf<sup>2</sup>+360a<sup>2</sup>bcfm+180a<sup>2</sup>bcm<sup>2</sup>+60a<sup>2</sup>bd<sup>3</sup>+180a<sup>2</sup>bd<sup>2</sup>f+180a<sup>2</sup>bd<sup>2</sup>m+180a<sup>2</sup>bdf<sup>2</sup>+360a<sup>2</sup>bdfm+180a<sup>2</sup>bdm<sup>2</sup>+60a<sup>2</sup>bf<sup>3</sup>+180a<sup>2</sup>bf<sup>2</sup>m+180a<sup>2</sup>bfm<sup>2</sup>+60a<sup>2</sup>bm<sup>3</sup>+15a<sup>2</sup>c<sup>4</sup>+60a<sup>2</sup>c<sup>3</sup>d+60a<sup>2</sup>c<sup>3</sup>f+60a<sup>2</sup>c<sup>3</sup>m+90a<sup>2</sup>c<sup>2</sup>d<sup>2</sup>+180a<sup>2</sup>c<sup>2</sup>df+180a<sup>2</sup>c<sup>2</sup>dm+90a<sup>2</sup>c<sup>2</sup>f<sup>2</sup>+180a<sup>2</sup>c<sup>2</sup>fm+90a<sup>2</sup>c<sup>2</sup>m<sup>2</sup>+60a<sup>2</sup>cd<sup>3</sup>+180a<sup>2</sup>cd<sup>2</sup>f+180a<sup>2</sup>cd<sup>2</sup>m+180a<sup>2</sup>cdf<sup>2</sup>+360a<sup>2</sup>cdfm+180a<sup>2</sup>cdm<sup>2</sup>+60a<sup>2</sup>cf<sup>3</sup>+180a<sup>2</sup>cf<sup>2</sup>m+180a<sup>2</sup>cfm<sup>2</sup>+60a<sup>2</sup>cm<sup>3</sup>+15a<sup>2</sup>d<sup>4</sup>+60a<sup>2</sup>d<sup>3</sup>f+60a<sup>2</sup>d<sup>3</sup>m+90a<sup>2</sup>d<sup>2</sup>f<sup>2</sup>+180a<sup>2</sup>d<sup>2</sup>fm+90a<sup>2</sup>d<sup>2</sup>m<sup>2</sup>+60a<sup>2</sup>df<sup>3</sup>+180a<sup>2</sup>df<sup>2</sup>m+180a<sup>2</sup>dfm<sup>2</sup>+60a<sup>2</sup>dm<sup>3</sup>+15a<sup>2</sup>f<sup>4</sup>+60a<sup>2</sup>f<sup>3</sup>m+90a<sup>2</sup>f<sup>2</sup>m<sup>2</sup>+60a<sup>2</sup>fm<sup>3</sup>+15a<sup>2</sup>m<sup>4</sup>+6ab<sup>5</sup>+30ab<sup>4</sup>c+30ab<sup>4</sup>d+30ab<sup>4</sup>f+30ab<sup>4</sup>m+60ab<sup>3</sup>c<sup>2</sup>+120ab<sup>3</sup>cd+120ab<sup>3</sup>cf+120ab<sup>3</sup>cm+60ab<sup>3</sup>d<sup>2</sup>+120ab<sup>3</sup>df+120ab<sup>3</sup>dm+60ab<sup>3</sup>f<sup>2</sup>+120ab<sup>3</sup>fm+60ab<sup>3</sup>m<sup>2</sup>+60ab<sup>2</sup>c<sup>3</sup>+180ab<sup>2</sup>c<sup>2</sup>d+180ab<sup>2</sup>c<sup>2</sup>f+180ab<sup>2</sup>c<sup>2</sup>m+180ab<sup>2</sup>cd<sup>2</sup>+360ab<sup>2</sup>cdf+360ab<sup>2</sup>cdm+180ab<sup>2</sup>cf<sup>2</sup>+360ab<sup>2</sup>cfm+180ab<sup>2</sup>cm<sup>2</sup>+60ab<sup>2</sup>d<sup>3</sup>+180ab<sup>2</sup>d<sup>2</sup>f+180ab<sup>2</sup>d<sup>2</sup>m+180ab<sup>2</sup>df<sup>2</sup>+360ab<sup>2</sup>dfm+180ab<sup>2</sup>dm<sup>2</sup>+60ab<sup>2</sup>f<sup>3</sup>+180ab<sup>2</sup>f<sup>2</sup>m+180ab<sup>2</sup>fm<sup>2</sup>+60ab<sup>2</sup>m<sup>3</sup>+30abc<sup>4</sup>+120abc<sup>3</sup>d+120abc<sup>3</sup>f+120abc<sup>3</sup>m+180abc<sup>2</sup>d<sup>2</sup>+360abc<sup>2</sup>df+360abc<sup>2</sup>dm+180abc<sup>2</sup>f<sup>2</sup>+360abc<sup>2</sup>fm+180abc<sup>2</sup>m<sup>2</sup>+120abcd<sup>3</sup>+360abcd<sup>2</sup>f+360abcd<sup>2</sup>m+360abcdf<sup>2</sup>+720abcdfm+360abcdm<sup>2</sup>+120abcf<sup>3</sup>+360abcf<sup>2</sup>m+360abcfm<sup>2</sup>+120abcm<sup>3</sup>+30abd<sup>4</sup>+120abd<sup>3</sup>f+120abd<sup>3</sup>m+180abd<sup>2</sup>f<sup>2</sup>+360abd<sup>2</sup>fm+180abd<sup>2</sup>m<sup>2</sup>+120abdf<sup>3</sup>+360abdf<sup>2</sup>m+360abdfm<sup>2</sup>+120abdm<sup>3</sup>+30abf<sup>4</sup>+120abf<sup>3</sup>m+180abf<sup>2</sup>m<sup>2</sup>+120abfm<sup>3</sup>+30abm<sup>4</sup>+6ac<sup>5</sup>+30ac<sup>4</sup>d+30ac<sup>4</sup>f+30ac<sup>4</sup>m+60ac<sup>3</sup>d<sup>2</sup>+120ac<sup>3</sup>df+120ac<sup>3</sup>dm+60ac<sup>3</sup>f<sup>2</sup>+120ac<sup>3</sup>fm+60ac<sup>3</sup>m<sup>2</sup>+60ac<sup>2</sup>d<sup>3</sup>+180ac<sup>2</sup>d<sup>2</sup>f+180ac<sup>2</sup>d<sup>2</sup>m+180ac<sup>2</sup>df<sup>2</sup>+360ac<sup>2</sup>dfm+180ac<sup>2</sup>dm<sup>2</sup>+60ac<sup>2</sup>f<sup>3</sup>+180ac<sup>2</sup>f<sup>2</sup>m+180ac<sup>2</sup>fm<sup>2</sup>+60ac<sup>2</sup>m<sup>3</sup>+30acd<sup>4</sup>+120acd<sup>3</sup>f+120acd<sup>3</sup>m+180acd<sup>2</sup>f<sup>2</sup>+360acd<sup>2</sup>fm+180acd<sup>2</sup>m<sup>2</sup>+120acdf<sup>3</sup>+360acdf<sup>2</sup>m+360acdfm<sup>2</sup>+120acdm<sup>3</sup>+30acf<sup>4</sup>+120acf<sup>3</sup>m+180acf<sup>2</sup>m<sup>2</sup>+120acfm<sup>3</sup>+30acm<sup>4</sup>+6ad<sup>5</sup>+30ad<sup>4</sup>f+30ad<sup>4</sup>m+60ad<sup>3</sup>f<sup>2</sup>+120ad<sup>3</sup>fm+60ad<sup>3</sup>m<sup>2</sup>+60ad<sup>2</sup>f<sup>3</sup>+180ad<sup>2</sup>f<sup>2</sup>m+180ad<sup>2</sup>fm<sup>2</sup>+60ad<sup>2</sup>m<sup>3</sup>+30adf<sup>4</sup>+120adf<sup>3</sup>m+180adf<sup>2</sup>m<sup>2</sup>+120adfm<sup>3</sup>+30adm<sup>4</sup>+6af<sup>5</sup>+30af<sup>4</sup>m+60af<sup>3</sup>m<sup>2</sup>+60af<sup>2</sup>m<sup>3</sup>+30afm<sup>4</sup>+6am<sup>5</sup>+b<sup>6</sup>+6b<sup>5</sup>c+6b<sup>5</sup>d+6b<sup>5</sup>f+6b<sup>5</sup>m+15b<sup>4</sup>c<sup>2</sup>+30b<sup>4</sup>cd+30b<sup>4</sup>cf+30b<sup>4</sup>cm+15b<sup>4</sup>d<sup>2</sup>+30b<sup>4</sup>df+30b<sup>4</sup>dm+15b<sup>4</sup>f<sup>2</sup>+30b<sup>4</sup>fm+15b<sup>4</sup>m<sup>2</sup>+20b<sup>3</sup>c<sup>3</sup>+60b<sup>3</sup>c<sup>2</sup>d+60b<sup>3</sup>c<sup>2</sup>f+60b<sup>3</sup>c<sup>2</sup>m+60b<sup>3</sup>cd<sup>2</sup>+120b<sup>3</sup>cdf+120b<sup>3</sup>cdm+60b<sup>3</sup>cf<sup>2</sup>+120b<sup>3</sup>cfm+60b<sup>3</sup>cm<sup>2</sup>+20b<sup>3</sup>d<sup>3</sup>+60b<sup>3</sup>d<sup>2</sup>f+60b<sup>3</sup>d<sup>2</sup>m+60b<sup>3</sup>df<sup>2</sup>+120b<sup>3</sup>dfm+60b<sup>3</sup>dm<sup>2</sup>+20b<sup>3</sup>f<sup>3</sup>+60b<sup>3</sup>f<sup>2</sup>m+60b<sup>3</sup>fm<sup>2</sup>+20b<sup>3</sup>m<sup>3</sup>+15b<sup>2</sup>c<sup>4</sup>+60b<sup>2</sup>c<sup>3</sup>d+60b<sup>2</sup>c<sup>3</sup>f+60b<sup>2</sup>c<sup>3</sup>m+90b<sup>2</sup>c<sup>2</sup>d<sup>2</sup>+180b<sup>2</sup>c<sup>2</sup>df+180b<sup>2</sup>c<sup>2</sup>dm+90b<sup>2</sup>c<sup>2</sup>f<sup>2</sup>+180b<sup>2</sup>c<sup>2</sup>fm+90b<sup>2</sup>c<sup>2</sup>m<sup>2</sup>+60b<sup>2</sup>cd<sup>3</sup>+180b<sup>2</sup>cd<sup>2</sup>f+180b<sup>2</sup>cd<sup>2</sup>m+180b<sup>2</sup>cdf<sup>2</sup>+360b<sup>2</sup>cdfm+180b<sup>2</sup>cdm<sup>2</sup>+60b<sup>2</sup>cf<sup>3</sup>+180b<sup>2</sup>cf<sup>2</sup>m+180b<sup>2</sup>cfm<sup>2</sup>+60b<sup>2</sup>cm<sup>3</sup>+15b<sup>2</sup>d<sup>4</sup>+60b<sup>2</sup>d<sup>3</sup>f+60b<sup>2</sup>d<sup>3</sup>m+90b<sup>2</sup>d<sup>2</sup>f<sup>2</sup>+180b<sup>2</sup>d<sup>2</sup>fm+90b<sup>2</sup>d<sup>2</sup>m<sup>2</sup>+60b<sup>2</sup>df<sup>3</sup>+180b<sup>2</sup>df<sup>2</sup>m+180b<sup>2</sup>dfm<sup>2</sup>+60b<sup>2</sup>dm<sup>3</sup>+15b<sup>2</sup>f<sup>4</sup>+60b<sup>2</sup>f<sup>3</sup>m+90b<sup>2</sup>f<sup>2</sup>m<sup>2</sup>+60b<sup>2</sup>fm<sup>3</sup>+15b<sup>2</sup>m<sup>4</sup>+6bc<sup>5</sup>+30bc<sup>4</sup>d+30bc<sup>4</sup>f+30bc<sup>4</sup>m+60bc<sup>3</sup>d<sup>2</sup>+120bc<sup>3</sup>df+120bc<sup>3</sup>dm+60bc<sup>3</sup>f<sup>2</sup>+120bc<sup>3</sup>fm+60bc<sup>3</sup>m<sup>2</sup>+60bc<sup>2</sup>d<sup>3</sup>+180bc<sup>2</sup>d<sup>2</sup>f+180bc<sup>2</sup>d<sup>2</sup>m+180bc<sup>2</sup>df<sup>2</sup>+360bc<sup>2</sup>dfm+180bc<sup>2</sup>dm<sup>2</sup>+60bc<sup>2</sup>f<sup>3</sup>+180bc<sup>2</sup>f<sup>2</sup>m+180bc<sup>2</sup>fm<sup>2</sup>+60bc<sup>2</sup>m<sup>3</sup>+30bcd<sup>4</sup>+120bcd<sup>3</sup>f+120bcd<sup>3</sup>m+180bcd<sup>2</sup>f<sup>2</sup>+360bcd<sup>2</sup>fm+180bcd<sup>2</sup>m<sup>2</sup>+120bcdf<sup>3</sup>+360bcdf<sup>2</sup>m+360bcdfm<sup>2</sup>+120bcdm<sup>3</sup>+30bcf<sup>4</sup>+120bcf<sup>3</sup>m+180bcf<sup>2</sup>m<sup>2</sup>+120bcfm<sup>3</sup>+30bcm<sup>4</sup>+6bd<sup>5</sup>+30bd<sup>4</sup>f+30bd<sup>4</sup>m+60bd<sup>3</sup>f<sup>2</sup>+120bd<sup>3</sup>fm+60bd<sup>3</sup>m<sup>2</sup>+60bd<sup>2</sup>f<sup>3</sup>+180bd<sup>2</sup>f<sup>2</sup>m+180bd<sup>2</sup>fm<sup>2</sup>+60bd<sup>2</sup>m<sup>3</sup>+30bdf<sup>4</sup>+120bdf<sup>3</sup>m+180bdf<sup>2</sup>m<sup>2</sup>+120bdfm<sup>3</sup>+30bdm<sup>4</sup>+6bf<sup>5</sup>+30bf<sup>4</sup>m+60bf<sup>3</sup>m<sup>2</sup>+60bf<sup>2</sup>m<sup>3</sup>+30bfm<sup>4</sup>+6bm<sup>5</sup>+c<sup>6</sup>+6c<sup>5</sup>d+6c<sup>5</sup>f+6c<sup>5</sup>m+15c<sup>4</sup>d<sup>2</sup>+30c<sup>4</sup>df+30c<sup>4</sup>dm+15c<sup>4</sup>f<sup>2</sup>+30c<sup>4</sup>fm+15c<sup>4</sup>m<sup>2</sup>+20c<sup>3</sup>d<sup>3</sup>+60c<sup>3</sup>d<sup>2</sup>f+60c<sup>3</sup>d<sup>2</sup>m+60c<sup>3</sup>df<sup>2</sup>+120c<sup>3</sup>dfm+60c<sup>3</sup>dm<sup>2</sup>+20c<sup>3</sup>f<sup>3</sup>+60c<sup>3</sup>f<sup>2</sup>m+60c<sup>3</sup>fm<sup>2</sup>+20c<sup>3</sup>m<sup>3</sup>+15c<sup>2</sup>d<sup>4</sup>+60c<sup>2</sup>d<sup>3</sup>f+60c<sup>2</sup>d<sup>3</sup>m+90c<sup>2</sup>d<sup>2</sup>f<sup>2</sup>+180c<sup>2</sup>d<sup>2</sup>fm+90c<sup>2</sup>d<sup>2</sup>m<sup>2</sup>+60c<sup>2</sup>df<sup>3</sup>+180c<sup>2</sup>df<sup>2</sup>m+180c<sup>2</sup>dfm<sup>2</sup>+60c<sup>2</sup>dm<sup>3</sup>+15c<sup>2</sup>f<sup>4</sup>+60c<sup>2</sup>f<sup>3</sup>m+90c<sup>2</sup>f<sup>2</sup>m<sup>2</sup>+60c<sup>2</sup>fm<sup>3</sup>+15c<sup>2</sup>m<sup>4</sup>+6cd<sup>5</sup>+30cd<sup>4</sup>f+30cd<sup>4</sup>m+60cd<sup>3</sup>f<sup>2</sup>+120cd<sup>3</sup>fm+60cd<sup>3</sup>m<sup>2</sup>+60cd<sup>2</sup>f<sup>3</sup>+180cd<sup>2</sup>f<sup>2</sup>m+180cd<sup>2</sup>fm<sup>2</sup>+60cd<sup>2</sup>m<sup>3</sup>+30cdf<sup>4</sup>+120cdf<sup>3</sup>m+180cdf<sup>2</sup>m<sup>2</sup>+120cdfm<sup>3</sup>+30cdm<sup>4</sup>+6cf<sup>5</sup>+30cf<sup>4</sup>m+60cf<sup>3</sup>m<sup>2</sup>+60cf<sup>2</sup>m<sup>3</sup>+30cfm<sup>4</sup>+6cm<sup>5</sup>+d<sup>6</sup>+6d<sup>5</sup>f+6d<sup>5</sup>m+15d<sup>4</sup>f<sup>2</sup>+30d<sup>4</sup>fm+15d<sup>4</sup>m<sup>2</sup>+20d<sup>3</sup>f<sup>3</sup>+60d<sup>3</sup>f<sup>2</sup>m+60d<sup>3</sup>fm<sup>2</sup>+20d<sup>3</sup>m<sup>3</sup>+15d<sup>2</sup>f<sup>4</sup>+60d<sup>2</sup>f<sup>3</sup>m+90d<sup>2</sup>f<sup>2</sup>m<sup>2</sup>+60d<sup>2</sup>fm<sup>3</sup>+15d<sup>2</sup>m<sup>4</sup>+6df<sup>5</sup>+30df<sup>4</sup>m+60df<sup>3</sup>m<sup>2</sup>+60df<sup>2</sup>m<sup>3</sup>+30dfm<sup>4</sup>+6dm<sup>5</sup>+f<sup>6</sup>+6f<sup>5</sup>m+15f<sup>4</sup>m<sup>2</sup>+20f<sup>3</sup>m<sup>3</sup>+15f<sup>2</sup>m<sup>4</sup>+6fm<sup>5</sup>+m<sup>6</sup>

this monstrosity has the same numbers as the pascal 6D's 6th layer, the other use of it is umm explained by wikipedia idk how to explain it
https://en.wikipedia.org/wiki/Pascal%27s_pyramid#Trinomial_distribution_connection
and umm wikipedia in total explains good amount of uses of pascal: https://en.wikipedia.org/wiki/Pascal%27s_triangle

the reason why I made this was not related to school(umm a lil bit related but not really tbh), I was just bored -_-
