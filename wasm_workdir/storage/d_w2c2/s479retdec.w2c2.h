#ifndef s479retdec_H
#define s479retdec_H

#include "w2c2_base.h"

typedef struct s479retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s479retdecInstance;

void f0(s479retdecInstance*);

void f1(s479retdecInstance*);

U32 f2(s479retdecInstance*);

void f3(s479retdecInstance*,U32);

U32 f4(s479retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s479retdecInstance*,U32,U32,U32,U32,U32);

void f6(s479retdecInstance*,U32);

void f7(s479retdecInstance*,U32,U32,U32);

void f8(s479retdecInstance*,U32,U32,U32);

void s479retdec____wasm_call_ctors(s479retdecInstance*i);

void s479retdec____wasm_apply_data_relocs(s479retdecInstance*i);

U32 s479retdec_func_1(s479retdecInstance*i);

void s479retdec_call_cb(s479retdecInstance*i,U32 l0);

void s479retdecInstantiate(s479retdecInstance* instance, void* resolve(const char* module, const char* name));

void s479retdecFreeInstance(s479retdecInstance* instance);

#endif /* s479retdec_H */

