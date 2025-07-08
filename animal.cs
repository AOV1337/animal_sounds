namespace Animals
{
    public abstract class Animal
    {
        public void DescribeSound()
        {
            Console.WriteLine($"{GetType().Name} makes sound: {MakeSound()}");
        }

        protected abstract string MakeSound();
    }
}
