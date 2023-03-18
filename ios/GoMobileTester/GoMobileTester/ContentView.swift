//
//  ContentView.swift
//  GoMobileTester
//
//  Created by 周和生 on 2021/9/28.
//

import SwiftUI
import Greeter

struct ContentView: View {
    var body: some View {
        Text("Hello, world!")
            .padding()
            .onAppear(perform: fetch)
            .onDisappear {
                print("ContentView disappeared!")
            }
    }
}

private func fetch() {
    let printer = SwiftPrinter()
    let greeter = GreeterNewGreeter(printer)
    greeter!.greet("Mat")
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}


