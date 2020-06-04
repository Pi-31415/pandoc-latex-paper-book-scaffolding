# pandoc-latex-paper-book template
A scaffolding template for publishing research papers/ books in pandoc and latex, and get epub and pdf as output files.


### To Create Book
1. Change to this directory.
2. Replace contents of `metadata.txt`, `contents.markdown`, and `cover.jpg` with your own content.
3. Create your book with the following syntax:
```bash
pandoc --toc --epub-embed-font='fonts/*.ttf' -o book.epub metadata.txt contents.markdown
```
Your book will be exported as `book.epub`.

### To Convert to PDF

```bash
pandoc -N --template=template.tex --variable mainfont="Palatino" --variable sansfont="Helvetica" --variable monofont="Menlo" --variable fontsize=12pt --variable version=2.0 contents.markdown --pdf-engine=xelatex --toc -o book.pdf
```