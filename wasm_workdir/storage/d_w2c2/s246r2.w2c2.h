#ifndef s246r2_H
#define s246r2_H

#include "w2c2_base.h"

typedef struct s246r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s246r2Instance;

void f0(s246r2Instance*);

void f1(s246r2Instance*);

U32 f2(s246r2Instance*);

void f3(s246r2Instance*,U32);

U32 f4(s246r2Instance*,U32,U32,U32,U32);

void f5(s246r2Instance*,U32,U32,U32,U32,U32);

void f6(s246r2Instance*,U32);

void f7(s246r2Instance*,U32,U32,U32);

void f8(s246r2Instance*,U32,U32,U32);

void s246r2____wasm_call_ctors(s246r2Instance*i);

void s246r2____wasm_apply_data_relocs(s246r2Instance*i);

U32 s246r2_func_1(s246r2Instance*i);

void s246r2_call_cb(s246r2Instance*i,U32 l0);

void s246r2Instantiate(s246r2Instance* instance, void* resolve(const char* module, const char* name));

void s246r2FreeInstance(s246r2Instance* instance);

#endif /* s246r2_H */

