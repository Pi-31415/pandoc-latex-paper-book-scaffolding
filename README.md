# pandoc-latex-paper-book template
A ready-to-use scaffolding template for publishing research papers/ books in pandoc and latex, and get epub and pdf as output files.

I based this off from [pandoc-markdown-book-template](https://github.com/johnpaulada/pandoc-markdown-book-template) by [John Paul Ada](https://github.com/johnpaulada) and throw in some latex style formatting.

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
pandoc -N --template=template.tex --variable fontsize=12pt --variable version=2.0 ./contents.markdown --highlight-style pygments --pdf-engine=xelatex --toc -o ./docs.pdf
```

Your book will be exported as `book.pdf`.


