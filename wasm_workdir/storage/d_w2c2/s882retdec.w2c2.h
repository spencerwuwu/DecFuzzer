#ifndef s882retdec_H
#define s882retdec_H

#include "w2c2_base.h"

typedef struct s882retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s882retdecInstance;

void f0(s882retdecInstance*);

void f1(s882retdecInstance*);

U32 f2(s882retdecInstance*);

void f3(s882retdecInstance*,U32);

U32 f4(s882retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s882retdecInstance*,U32,U32,U32,U32,U32);

void f6(s882retdecInstance*,U32);

void f7(s882retdecInstance*,U32,U32,U32);

void f8(s882retdecInstance*,U32,U32,U32);

void s882retdec____wasm_call_ctors(s882retdecInstance*i);

void s882retdec____wasm_apply_data_relocs(s882retdecInstance*i);

U32 s882retdec_func_1(s882retdecInstance*i);

void s882retdec_call_cb(s882retdecInstance*i,U32 l0);

void s882retdecInstantiate(s882retdecInstance* instance, void* resolve(const char* module, const char* name));

void s882retdecFreeInstance(s882retdecInstance* instance);

#endif /* s882retdec_H */

