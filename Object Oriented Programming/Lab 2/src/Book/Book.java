package Book;
public class Book 
{
		String title;
		String authorName;
		int pages;
		
		public String toString()
		{
			return
					"The book title is: " +
					this.authorName 
					+ "\n" +
					"The author is: " +
					this.title 
					+ "\n" +
					"The book has: " +
					this.pages;
		}
		
		public Book(String author, String booktitle, int npages)
		{
			this.authorName = author;
			this.title = booktitle;
			this.pages = npages;
		}
}
