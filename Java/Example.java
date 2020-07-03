import javax.swing.JFrame;
import javax.swing.JLabel;
import java.awt.Dimension;
import javax.swing.SwingUtilities;

public class Example
{
	private static void createGUI()
	{
		// Create the window
		JFrame exampleFrame = new JFrame("Example Frame");
		exampleFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		exampleFrame.setPreferredSize(new Dimension(400, 300));

		// Create a Hello World label
		JLabel helloWorldLabel = new JLabel("Hello World");
		exampleFrame.getContentPane().add(helloWorldLabel);

		// Display the window
		exampleFrame.pack();
		exampleFrame.setLocationRelativeTo(null);
		exampleFrame.setVisible(true);
	}
	public static void main(String[] args) {
		System.out.println("Hello World Start");

		SwingUtilities.invokeLater(new Runnable()
		{
			public void run()
			{
				createGUI();
			}
		});
	}
}
