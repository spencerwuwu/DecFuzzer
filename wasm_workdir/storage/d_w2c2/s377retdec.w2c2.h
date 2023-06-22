#ifndef s377retdec_H
#define s377retdec_H

#include "w2c2_base.h"

typedef struct s377retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s377retdecInstance;

void f0(s377retdecInstance*);

void f1(s377retdecInstance*);

U32 f2(s377retdecInstance*);

void f3(s377retdecInstance*,U32);

U32 f4(s377retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s377retdecInstance*,U32,U32,U32,U32,U32);

void f6(s377retdecInstance*,U32);

void f7(s377retdecInstance*,U32,U32,U32);

void f8(s377retdecInstance*,U32,U32,U32);

void s377retdec____wasm_call_ctors(s377retdecInstance*i);

void s377retdec____wasm_apply_data_relocs(s377retdecInstance*i);

U32 s377retdec_func_1(s377retdecInstance*i);

void s377retdec_call_cb(s377retdecInstance*i,U32 l0);

void s377retdecInstantiate(s377retdecInstance* instance, void* resolve(const char* module, const char* name));

void s377retdecFreeInstance(s377retdecInstance* instance);

#endif /* s377retdec_H */

