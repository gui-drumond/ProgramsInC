using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int VEZES=0;
            char letra = Convert.ToChar(textBox1.Text);
            int numero = Convert.ToInt32(letra);
            //MessageBox.Show(numero.ToString(),"letra");
            int n1=0, n2=0, tudo;

            if (VEZES == 1)
            {
                n2 = numero;
                VEZES = 0;
            }
            else if (VEZES == 0)
            {
                n1 = numero;
                VEZES = 1;

            }
            tudo = n1 + n2;
            MessageBox.Show(tudo.ToString(), "letra");

        }
    }
}
