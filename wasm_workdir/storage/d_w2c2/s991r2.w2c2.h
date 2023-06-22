#ifndef s991r2_H
#define s991r2_H

#include "w2c2_base.h"

typedef struct s991r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s991r2Instance;

void f0(s991r2Instance*);

void f1(s991r2Instance*);

U32 f2(s991r2Instance*);

void f3(s991r2Instance*,U32);

U32 f4(s991r2Instance*,U32,U32,U32,U32,U32);

void f5(s991r2Instance*,U32,U32,U32,U32,U32);

void f6(s991r2Instance*,U32);

void f7(s991r2Instance*,U32,U32,U32);

void f8(s991r2Instance*,U32,U32,U32);

void s991r2____wasm_call_ctors(s991r2Instance*i);

void s991r2____wasm_apply_data_relocs(s991r2Instance*i);

U32 s991r2_func_1(s991r2Instance*i);

void s991r2_call_cb(s991r2Instance*i,U32 l0);

void s991r2Instantiate(s991r2Instance* instance, void* resolve(const char* module, const char* name));

void s991r2FreeInstance(s991r2Instance* instance);

#endif /* s991r2_H */

