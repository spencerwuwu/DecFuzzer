#ifndef s246retdec_H
#define s246retdec_H

#include "w2c2_base.h"

typedef struct s246retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s246retdecInstance;

void f0(s246retdecInstance*);

void f1(s246retdecInstance*);

U32 f2(s246retdecInstance*);

void f3(s246retdecInstance*,U32);

U32 f4(s246retdecInstance*,U32,U32,U32,U32);

void f5(s246retdecInstance*,U32,U32,U32,U32,U32);

void f6(s246retdecInstance*,U32);

void f7(s246retdecInstance*,U32,U32,U32);

void f8(s246retdecInstance*,U32,U32,U32);

void s246retdec____wasm_call_ctors(s246retdecInstance*i);

void s246retdec____wasm_apply_data_relocs(s246retdecInstance*i);

U32 s246retdec_func_1(s246retdecInstance*i);

void s246retdec_call_cb(s246retdecInstance*i,U32 l0);

void s246retdecInstantiate(s246retdecInstance* instance, void* resolve(const char* module, const char* name));

void s246retdecFreeInstance(s246retdecInstance* instance);

#endif /* s246retdec_H */

