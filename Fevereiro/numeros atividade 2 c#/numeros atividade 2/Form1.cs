using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (Convert.ToInt32(textBox1.Text) > Convert.ToInt32(textBox2.Text) && Convert.ToInt32(textBox1.Text) > Convert.ToInt32(textBox3.Text))
            {
                textBox4.Text =textBox1.Text;
                textBox5.Text = Convert.ToString(100 - Convert.ToInt32(textBox1.Text));
            }
            else if (Convert.ToInt32(textBox2.Text) > Convert.ToInt32(textBox1.Text) && Convert.ToInt32(textBox2.Text) > Convert.ToInt32(textBox3.Text))
            {
                textBox4.Text = textBox2.Text;
                textBox5.Text = Convert.ToString(100 - Convert.ToInt32(textBox2.Text));
            }
            else if (Convert.ToInt32(textBox3.Text) > Convert.ToInt32(textBox2.Text) && Convert.ToInt32(textBox3.Text) > Convert.ToInt32(textBox1.Text))
            {
                textBox4.Text = textBox3.Text;
                textBox5.Text = Convert.ToString(100 - Convert.ToInt32(textBox3.Text));
            }
        }
    }
}
