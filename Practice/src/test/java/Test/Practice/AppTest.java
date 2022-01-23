package Test.Practice;

import org.junit.Test;
import static org.junit.Assert.assertTrue;

public class AppTest {

	@org.junit.Test
	public void testInputIsEven()
	{
		assertTrue(ChekOddEven.checkOddEven(22));
	}
	
}
