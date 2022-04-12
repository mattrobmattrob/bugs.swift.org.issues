//
//  Crasher.swift
//  Foo
//
//  Created by Matt Robinson on 4/12/22.
//

import Foundation
import Bar

public final class Crash {
    public func thisWillCrashTheCompiler() -> String {
        let url = EndpointUrl("")
        return url
    }
}
