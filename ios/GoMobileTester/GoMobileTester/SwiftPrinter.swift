//
//  SwiftPrinter.swift
//  GoMobileTester
//
//  Created by 周和生 on 2021/9/28.
//

import UIKit
import Greeter

class SwiftPrinter: NSObject, GreeterPrinterProtocol {
    func printSomething(_ s: String?) {
        print("This just in:", s)
    }



}
