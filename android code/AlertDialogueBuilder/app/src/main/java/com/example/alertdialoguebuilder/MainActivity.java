package com.example.alertdialoguebuilder;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {
AlertDialog.Builder builder;
Button btn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btn=findViewById(R.id.button);
        builder=new AlertDialog.Builder(this);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                builder.setTitle("Alert");
                builder.setMessage("Do you want to continue, Your phone is infected wiht virus," +
                        "    Install XYZ ANTIVIRUS");
                builder.setMessage("Go Ahead")
                builder.show();
            }
        });

    }

}
