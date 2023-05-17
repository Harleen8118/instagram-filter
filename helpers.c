#include "helpers.h"
#include<math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    int i,j,avg;
    for(i = 0; i < height; i++)
    {
        for(j=0; j < width; j++)
        {
            avg = round(( image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);
            image[i][j].rgbtRed = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtBlue = avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    int i,j,red,green,blue;
    for(i = 0; i < height; i++)
    {
        for(j=0; j < width; j++)
        {
            red = round(0.393 * image[i][j].rgbtRed + 0.769 * image[i][j].rgbtGreen + 0.189 * image[i][j].rgbtBlue);
            green = round( 0.349 * image[i][j].rgbtRed + 0.686 * image[i][j].rgbtGreen + 0.168 * image[i][j].rgbtBlue);
            blue = round(0.272 * image[i][j].rgbtRed + 0.534 * image[i][j].rgbtGreen + 0.131 * image[i][j].rgbtBlue);
            if(red > 0 && red < 255) 
            image[i][j].rgbtRed = red;
            if(red < 0)
            image[i][j].rgbtRed = 0;
            if(red > 255)
            image[i][j].rgbtRed = 255;
            if(green > 0 && green < 255) 
            image[i][j].rgbtGreen = green;
            if(green < 0)
            image[i][j].rgbtGreen = 0;
            if(green > 255)
            image[i][j].rgbtGreen = 255;
            if(blue > 0 && blue < 255) 
            image[i][j].rgbtBlue = blue;
            if(blue < 0)
            image[i][j].rgbtBlue = 0;
            if(blue > 255)
            image[i][j].rgbtBlue = 255;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
