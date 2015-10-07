//
//  ViewController.swift
//  SwiftCallOCWebService
//
//  Created by chenyufeng on 15/8/7.
//  Copyright (c) 2015年 apple. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var phoneNumber: UITextField!//输入手机号码的文本框；
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    //查询按钮的响应；
    @IBAction func beginQuery(sender: AnyObject) {
        
        let webservice = OCWebService()//主要在OCWebService这个OC写的类中实现对WebService的调用；

        webservice.query(phoneNumber.text)//调用query方法开始访问WebService，传递的参数是电话号码；
    }
    
}

