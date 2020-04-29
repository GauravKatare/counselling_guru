import sys
from fpdf import FPDF
pdf = FPDF() 
pdf.add_page() 
pdf.set_font("Arial", size = 15) 
for line in sys.stdin:
    s=line
s=s.split(" ")
s.pop()
for ss in s:
	f=open(ss,"r") 
	for x in f: 
		pdf.cell(200, 10, txt = x, ln = 1, align = 'C') 
	pdf.output(ss) 
