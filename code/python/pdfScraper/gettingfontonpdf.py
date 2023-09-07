import pdfplumber
pdf_path = "pdftoscrap.pdf"
# I need font size and font name
with pdfplumber.open(pdf_path) as pdf:
    for page in pdf.pages:
        for font in page.chars:
            print(font["fontname"], font["size"])>